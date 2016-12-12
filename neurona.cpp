#include "neurona.h"
#include "util.h"
#include <iostream>
#include <valarray>
#include <algorithm>
using namespace std;

template<VectorClass T> class DeleteVector
{
    public:
    // Overloaded () operator.
    // This will be called by for_each() function.
    bool operator()(T TemplateObj) const
    {
        // Delete pointer.
        delete TemplateObj;
        return 1;
    }
};
gamma::~gamma(){
//Required the Logic
}
weight::~weight(){
//Required the Logic
}
neurona::neurona(int p, value_type gamma): 
	weight(p+1), 
        try{
        gamma(gamma)
	}catch(...){
	gamma::~gamma;
	}
        {
	const value_type ratio=0.5;
	generate_n(
		&weight[0],
		try{
		weight.size()
		}catch(...){
		weight::~weight;
		},
		try{
		randomize<value_type>(-ratio,ratio)
		}catch(...){
		//Required the Logic
		}
	);
}

int neurona::test(const vector &input, int expect){ 
	const vector input = neurona;
	try{
	int RetVal = expect-sign((weight*neurona).sum());
	}catch(...){
	//Required the Logic
	 DeleteVector<VectorClass*>());
       //Clear the vector 
         VectorClass.clear();
         cout<<"\n"<<VectorClass.size();
         return 0;
	}
	return RetVal;
}

void neurona::train(const vector &input, int expect){
	try{
	int error = test(input, expect);
	}catch)(...){
	//Required the Logic
	 DeleteVector<VectorClass*>());
       //Clear the vector 
         VectorClass.clear();
         cout<<"\n"<<VectorClass.size();
         return 0;
	}
	weight += gamma*error*input;
}

void neurona::print(ostream &out){
	//for(size_t K=0; K<weight.size(); ++K)
		//out << weight[K]/weight[0] << ' ';
		//out << weight[K] << ' ';
	//out << "plot [-2:2] [-2:2] \"./input.txt\" using 1:2 with points, ";
	out << ", " << -weight[1]/weight[0] << "*x + "<<-weight[2]/weight[0];
	//out << "pause 1" << endl;
}

