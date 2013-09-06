/* Context class.
 * Will implement the parallel version of the MOCL context
 */
#include <vector>
#include "Buffer.h"
#include "CommandQueue.h"
#include "Program.h"

class mocl_context
{
	private:
		std::vector<mocl_mem> buffer_space;
		mocl_command_queue queue;
		mocl_program program;

	public:
		mocl_context();
		~mocl_context();

		mocl_command_queue* createCommandQueue();
		mocl_program* buildProgram();

		mocl_mem* moclCreateBuffer(const char* flag, int size, void* user_buffer);
		void moclWaitforEvents();
}

	
		
