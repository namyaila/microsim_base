#include "life_tables.h"
#include "configuration.h"
#include <iostream>

// TODO: Use appropriate life tables.

namespace input_tables
{

void Life::set_table(parameters::Gender const gend)
{
    using namespace parameters;
    switch (gend)
    {
        case MALE:
            table = male;
            std::cout << "\nRunning male configuration.";
            break;
        case FEMALE:
            table = female;
            std::cout << "\nRunning female configuration.";
            break;
        case ALL:
            table = all;
            std::cout << "\nRunning mixed-gender configuration.";
            break;
        default:
            std::cout << "\nError setting life tables.";
    }
}

const double Life::get_probability(const int age_in_years)
{
    return table[age_in_years];
}

std::array<double, 100> Life::male =
{
    0.0065753404, 0.0004454227, 0.0003014493, 0.0002396981, 0.0001828320,
    0.0001686938, 0.0001503911, 0.0001339120, 0.0001154467, 0.0000965604,
    0.0000845469, 0.0000916856, 0.0001320857, 0.0002129535, 0.0003233085,
    0.0004387065, 0.0005517612, 0.0006746843, 0.0008069620, 0.0009421541,
    0.0010847864, 0.0012161247, 0.0013095988, 0.0013526399, 0.0013581510,
    0.0013505124, 0.0013491918, 0.0013533720, 0.0013708880, 0.0013992951,
    0.0014324390, 0.0014644366, 0.0014963852, 0.0015275829, 0.0015629106,
    0.0016130019, 0.0016817120, 0.0017636060, 0.0018568017, 0.0019639195,
    0.0020828829, 0.0022271434, 0.0024137700, 0.0026531464, 0.0029385707,
    0.0032431290, 0.0035634744, 0.0039220233, 0.0043204450, 0.0047487565,
    0.0051931241, 0.0056471555, 0.0061219628, 0.0066300002, 0.0071805734,
    0.0077786818, 0.0084153553, 0.0090736356, 0.0097266873, 0.0103705600,
    0.0110336887, 0.0117379762, 0.0124894818, 0.0133349532, 0.0143193873,
    0.0154819917, 0.0168242455, 0.0183304679, 0.0199000239, 0.0215393025,
    0.0233958922, 0.0254764389, 0.0277939141, 0.0303499028, 0.0332041085,
    0.0363449305, 0.0397875346, 0.0437201783, 0.0483349487, 0.0536495820,
    0.0595653690, 0.0658482313, 0.0729563460, 0.0807405859, 0.0893570632,
    0.0996501222, 0.1109010726, 0.1231464446, 0.1364120245, 0.1507103592,
    0.1660381258, 0.1823737472, 0.1996755451, 0.2178802937, 0.2369028032,
    0.2566363811, 0.2769544423, 0.2977131307, 0.3187551498, 0.3399141729
};

std::array<double, 100> Life::female =
{
    0.0055160415, 0.0003824397, 0.0002254729, 0.0001750891, 0.0001509474,
    0.0001319198, 0.0001170557, 0.0001055474, 0.0000958520, 0.0000880770,
    0.0000840868, 0.0000872635, 0.0001015608, 0.0001288937, 0.0001656643,
    0.0002066187, 0.0002470301, 0.0002855932, 0.0003200897, 0.0003512203,
    0.0003835980, 0.0004164904, 0.0004447007, 0.0004671437, 0.0004862001,
    0.0005045428, 0.0005259583, 0.0005526933, 0.0005866936, 0.0006265573,
    0.0006729391, 0.0007211930, 0.0007658389, 0.0008046317, 0.0008423967,
    0.0008878417, 0.0009466942, 0.0010171925, 0.0010992276, 0.0011919218,
    0.0012907494, 0.0014015875, 0.0015345605, 0.0016949063, 0.0018786276,
    0.0020701687, 0.0022682680, 0.0024860480, 0.0027245861, 0.0029774019,
    0.0032445933, 0.0035143215, 0.0037760620, 0.0040294984, 0.0042887311,
    0.0045642871, 0.0048747631, 0.0052340901, 0.0056470959, 0.0061026793,
    0.0065892055, 0.0071040303, 0.0076652537, 0.0083033163, 0.0090501215,
    0.0099529661, 0.0110005988, 0.0121242236, 0.0132501535, 0.0144191114,
    0.0157178789, 0.0172007363, 0.0188959464, 0.0208175499, 0.0229958724,
    0.0253870375, 0.0280898530, 0.0312251654, 0.0347857997, 0.0387918800,
    0.0431090258, 0.0478004217, 0.0531808063, 0.0593653284, 0.0668592602,
    0.0753910094, 0.0847444385, 0.0950717255, 0.1064273566, 0.1188573092,
    0.1323959082, 0.1470626593, 0.1628588885, 0.1797648221, 0.1977369487,
    0.2167061269, 0.2365769893, 0.2572282851, 0.2785149217, 0.3002712131
};

std::array<double, 100> Life::all =
{
    0.0060582776, 0.0004146291, 0.0002642563, 0.0002080532, 0.0001672152,
    0.0001506882, 0.0001340762, 0.0001200348, 0.0001058614, 0.0000924102,
    0.0000843217, 0.0000895220, 0.0001171599, 0.0001719026, 0.0002464490,
    0.0003257531, 0.0004036571, 0.0004856814, 0.0005703235, 0.0006545273,
    0.0007429182, 0.0008256211, 0.0008864734, 0.0009186285, 0.0009299408,
    0.0009341768, 0.0009431425, 0.0009576006, 0.0009825071, 0.0010159072,
    0.0010549675, 0.0010944114, 0.0011320952, 0.0011665351, 0.0012025700,
    0.0012498074, 0.0013130773, 0.0013889038, 0.0014763584, 0.0015762429,
    0.0016851770, 0.0018126727, 0.0019722015, 0.0021714352, 0.0024050092,
    0.0026518013, 0.0029096007, 0.0031960751, 0.0035126049, 0.0038509266,
    0.0042042523, 0.0045632813, 0.0049278704, 0.0053036301, 0.0057021170,
    0.0061310055, 0.0065956879, 0.0070955637, 0.0076208585, 0.0081640827,
    0.0087324707, 0.0093346499, 0.0099828346, 0.0107147060, 0.0115679773,
    0.0125858095, 0.0137633588, 0.0150568783, 0.0163801275, 0.0177561846,
    0.0192986149, 0.0210386794, 0.0229974594, 0.0251823198, 0.0276337154,
    0.0303218886, 0.0333087780, 0.0367399938, 0.0406876206, 0.0451721735,
    0.0500721112, 0.0553064495, 0.0612407401, 0.0678928718, 0.0755938664,
    0.0846488699, 0.0944367573, 0.1051519364, 0.1168346629, 0.1295160055,
    0.1432152539, 0.1579374820, 0.1736709774, 0.1903852820, 0.2080293894,
    0.2265309542, 0.2457961440, 0.2657106221, 0.2861416042, 0.3069409430
};

std::array<double, 100> Life::table{ 0 };

} // end namespace input_tables