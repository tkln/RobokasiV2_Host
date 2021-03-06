//
// Created by lehdari on 21.10.2018.
//

#ifndef ROBOKASIV2_GUI_PUMA560MODEL_HPP
#define ROBOKASIV2_GUI_PUMA560MODEL_HPP


#include <kinematics/Puma560.hpp>
#include "Renderable.hpp"
#include "Shader.hpp"
#include "Camera.hpp"
#include "Mesh.hpp"
#include "TransformedLines.hpp"


namespace gui {

    class Puma560Model : public kin::Puma560, public Renderable {
    public:
        Puma560Model();
        ~Puma560Model();

        void render(Shader& shader, Camera& camera);
        std::vector<std::shared_ptr<Renderable>> getCoordinateFrames(
            const std::shared_ptr<Lines>& coordinateFrame);

    private:
        static Mesh _links[6];
    };

} // namespace gui


#endif //ROBOKASIV2_HOST_PUMA560MODEL_HPP
