#ifndef PARTICLE_H_
#define PARTICLE_H_
// Particle header file 
namespace set {

	struct Particle {
		double m_x;
		double m_y;

	private:
		double m_speed;
		double m_direction;

	private:
		void init();

	public:
		Particle();
		virtual ~Particle();
		void update(int interval);
	};

} 
#endif  
