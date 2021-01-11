

class Device{
  public:
    Device();
    ~Device(){};
    virtual bool isEnabled()=0;

    virtual void enable()=0;

    virtual void disable()=0;

    virtual int getVolume()=0;

    virtual void setVolume(int)=0;

    virtual int getChannel()=0;

    virtual void setChannel(int)=0;

    virtual void printStatus()=0;

};

class Radio: public Device{
  bool on = false;
  int volume = 30;
  int channel = 1;

public:
  virtual bool isEnabled();

  virtual void enable();

  virtual void disable();

  virtual int getVolume();

  virtual void setVolume(int);

  virtual int getChannel();

  virtual void setChannel(int);

  virtual void printStatus();
};

class TV : public Device{
  bool on = false;
  int volume = 30;
  int channel = 1;

public:
  virtual bool isEnabled();

  virtual void enable();

  virtual void disable();

  virtual int getVolume();

  virtual void setVolume(int);

  virtual int getChannel();

  virtual void setChannel(int);

  virtual void printStatus();
};

class Remote {
public:
   virtual void power()=0;

   virtual void volumeDown()=0;

   virtual void volumeUp()=0;

   virtual void channelDown()=0;

   virtual void channelUp()=0;
};

class BasicRemote: public Remote{
protected:
    Device* device;
   public:
      BasicRemote (Device *device);
      BasicRemote();
      virtual void power();

      virtual void volumeDown();

      virtual void volumeUp();

      virtual void channelDown();

      virtual void channelUp();
};

class AdvancedRemote: public BasicRemote{
  public:
    AdvancedRemote(Device *device);
    void mute();
};
