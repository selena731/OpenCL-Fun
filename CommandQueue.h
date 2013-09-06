/* Command Queue class.
 * Is a queue that stores all the commands of the contexts
 */

class mocl_command_queue
{
	private:
		std::queue queue;

	public:
		mocl_command_queue();
		~mocl_command_queue();

		void* moclEnqueueMapBuffer();
}
