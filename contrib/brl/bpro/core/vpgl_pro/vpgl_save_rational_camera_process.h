// This is brl/bpro/core/vpgl_pro/vpgl_save_rational_camera_process.h
#ifndef vpgl_save_rational_camera_process_h_
#define vpgl_save_rational_camera_process_h_
//:
// \file
// \brief A process for saving a vpgl_rational_camera to an ascii file
// \author Ibrahim Eden
// \date 05/07/2008
//
// \verbatim
//  Modifications
//   <none yet>
// \endverbatim

#include <vcl_string.h>
#include <bprb/bprb_process.h>

//: saves a local-rational o rational camera to a text file
class vpgl_save_rational_camera_process : public bprb_process
{
 public:

  vpgl_save_rational_camera_process();

  //: Copy Constructor (no local data)
  vpgl_save_rational_camera_process(const vpgl_save_rational_camera_process& other): bprb_process(*static_cast<const bprb_process*>(&other)){}

 ~vpgl_save_rational_camera_process();

  //: Clone the process
  virtual vpgl_save_rational_camera_process* clone() const {return new vpgl_save_rational_camera_process(*this);}

  vcl_string name(){return "SaveRationalCameraProcess";}

  bool init() { return true; }
  bool execute();
  bool finish(){return true;}
};

#endif //vpgl_save_rational_camera_process_h_
