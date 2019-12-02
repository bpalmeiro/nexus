#ifndef SIPM_pet_9mm2_H
#define SIPM_pet_9mm2_H

#include "BaseGeometry.h"
#include <G4ThreeVector.hh>

class G4GenericMessenger;

namespace nexus {

  class SiPMpet9mm2: public BaseGeometry
  {
  public:
    /// Constructor
    SiPMpet9mm2();
    /// Destructor
    ~SiPMpet9mm2();
    
    /// Return dimensions of the SiPM
    //G4ThreeVector GetDimensions() const;
    
    /// Invoke this method to build the volumes of the geometry
    void Construct();
    
  private:
    //G4ThreeVector _dimensions; ///< external dimensions of the SiPMpet

    // Visibility of the tracking plane
    G4bool visibility_;

    // Optical properties to be used for epoxy
    G4double refr_index_;

    // PDE for the sensor
    G4double eff_;

    G4double time_binning_;

     // Messenger for the definition of control commands
    G4GenericMessenger* msg_; 

  };


} // end namespace nexus

#endif