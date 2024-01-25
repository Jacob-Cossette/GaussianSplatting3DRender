#include <string>
class MLModel {

public:
    void loadModel(const std::string& modelName) {
        //TODO: save and loaad model here.
    }

};

MLModel loadModel(const std::string& modelName) {
    MLModel model;
    model.loadModel(modelName);
    return model;
}
