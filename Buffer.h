/* Buffer class.
 * Will have the functionality of the OpenCL cl_mem buffer. 
 */

class mocl_mem
{
	private:
		int size;
		void* array;

	public:
		mocl_mem(int size);
		~mocl_mem();

		bool copyData(void* other, int size);
}


