// B657 assignment 3 skeleton code, D. Crandall
//
// Compile with: "make"
//
// This skeleton code implements nearest-neighbor classification
// using just matching on raw pixel values, but on subsampled "tiny images" of
// e.g. 20x20 pixels.
//
// It defines an abstract Classifier class, so that all you have to do
// :) to write a new algorithm is to derive a new class from
// Classifier containing your algorithm-specific code
// (i.e. load_model(), train(), and classify() methods) -- see
// NearestNeighbor.h for a prototype.  So in theory, you really
// shouldn't have to modify the code below or the code in Classifier.h
// at all, besides adding an #include and updating the "if" statement
// that checks "algo" below.
//
// See assignment handout for command line and project specifications.
//
#include "CImg.h"
#include <ctime>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <stdlib.h>
#include <string>
#include <vector>
#include <Sift.h>
#include <sstream>
#include <sys/types.h>
#include <dirent.h>
#include <map>
#include <numeric>
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/core/core.hpp"
#include "opencv2/imgproc/imgproc.hpp"

//Use the cimg namespace to access the functions easily
using namespace cimg_library;
using namespace std;
using namespace cv;
// Dataset data structure, set up so that e.g. dataset["bagel"][3] is
// filename of 4th bagel image in the dataset
typedef map<string, vector<string> > Dataset;


#include <Classifier.h>
#include <CNN.h>
#include <NearestNeighbor.h>
#include <Baseline.h>
#include <Eigen.h>
#include <bow.h>
#include <haar.h>

// Figure out a list of files in a given directory.
//
vector<string> files_in_directory(const string &directory, bool prepend_directory = false)
{
  vector<string> file_list;
  DIR *dir = opendir(directory.c_str());
  if(!dir)
    throw std::string("Can't find directory " + directory);
  
  struct dirent *dirent;
  while ((dirent = readdir(dir))) 
    if(dirent->d_name[0] != '.')
      file_list.push_back((prepend_directory?(directory+"/"):"")+dirent->d_name);

  closedir(dir);
  return file_list;
}

int main(int argc, char **argv)
{
  try {
    if(argc < 3)
      throw string("Insufficent number of arguments");

    string mode = argv[1];
    string algo = argv[2];

    // Scan through the "train" or "test" directory (depending on the
    //  mode) and builds a data structure of the image filenames for each class.
    Dataset filenames; 
    vector<string> class_list = files_in_directory(mode);
    for(vector<string>::const_iterator c = class_list.begin(); c != class_list.end(); ++c)
      filenames[*c] = files_in_directory(mode + "/" + *c, true);
      

    // set up the classifier based on the requested algo
    Classifier *classifier=0;
    if(algo == "nn")
      classifier = new NearestNeighbor(class_list);
    else if(algo== "baseline_c"){
      classifier = new SVM_c(class_list);
    }
    else if(algo == "baseline_b"){
      classifier = new SVM_b(class_list);
    }
    else if(algo == "cnn"){
      classifier = new CNN(class_list);
    }
    else if(algo == "eigen"){
      classifier = new Eigen(class_list);
    }
	else if(algo == "bow")
	  classifier = new bow(class_list);
	else if(algo == "haar")
	  classifier = new haar(class_list);
    else
      throw std::string("unknown classifier " + algo);

    // now train or test!
    if(mode == "train"){
      if(algo == "nn")
        classifier->test(filenames);
      else if(algo == "eigen"){
        classifier->train(filenames);
        cout << "\n" <<  "Training SVM" ;
        system("cd SVM/ && ./svm_multiclass_learn -c 5000 Eigentrain.dat model_eigen");
      }
      else if(algo == "baseline_c"){
        classifier->train(filenames);
        cout << "\n" <<  "Training SVM" ;
        system("cd SVM/ && ./svm_multiclass_learn -c 5000 baseline_c.dat model_baseline_color");
      }
	  else if(algo == "baseline_b"){
		classifier->train(filenames);
        cout << "\n" <<  "Training SVM" ;
        system("cd SVM/ && ./svm_multiclass_learn -c 5000 baseline_b.dat model_baseline_grayscale");
	  }
      else if(algo == "cnn"){
        classifier->train(filenames);
        cout << "\n" <<  "Training SVM" ;
        system("cd SVM/ && ./svm_multiclass_learn -c 5000 CNNtrain.dat model_cnn");
      }
	  else if(algo == "bow"){
        classifier->train(filenames);
        cout << "\n" <<  "Training SVM" ;
        system("cd SVM/ && ./svm_multiclass_learn -c 5000 bow.dat model_bow");		   
	  }
	  else if(algo == "haar"){
        classifier->train(filenames);
        cout << "\n" <<  "Training SVM" ;
        system("cd SVM/ && ./svm_multiclass_learn -c 5000 haar.dat model_haar");		   
	  }
    }
	
    else if(mode == "test")
      if(algo == "nn")
        classifier->test(filenames);
      else if(algo == "baseline_c"){
        classifier->testSVM(filenames);
        cout << "\n" <<  "Testing SVM" ;
        system("cd SVM/ && ./svm_multiclass_classify baseline_c_test.dat model_baseline_color prediction");
      }
      else if(algo == "baseline_b"){
        classifier->testSVM(filenames);
        cout << "\n" <<  "Testing SVM" ;
        system("cd SVM/ && ./svm_multiclass_classify baseline_b_test.dat model_baseline_grayscale prediction");
      }
      else if(algo == "cnn"){
        classifier->testSVM(filenames);
        cout << "\n" <<  "Testing SVM" ;
        system("cd SVM/ && ./svm_multiclass_classify CNNtest.dat model_cnn prediction");
      }
      else if(algo == "eigen"){
        classifier->testSVM(filenames);
        cout << "\n" <<  "Testing SVM" ;
        //system("cd SVM/ && ./svm_multiclass_classify Eigentest.dat model_eigen prediction");
      }
      else if(algo == "bow"){
        classifier->testSVM(filenames);
        cout << "\n" <<  "Testing SVM" ;
        system("cd SVM/ && ./svm_multiclass_classify bowtest.dat model_bow prediction");
	  }
      else if(algo == "haar"){
        classifier->testSVM(filenames);
        cout << "\n" <<  "Testing SVM" ;
        system("cd SVM/ && ./svm_multiclass_classify haartest.dat model_haar prediction");
      }
    else
      throw std::string("unknown mode!");
  }
  catch(const string &err) {
    cerr << "Error: " << err << endl;
  }
}








