cs:

config:
	git config --list

init:
	touch README
	git init
	git add README
	git commit -m 'first commit'
	git remote add origin git@github.com:gpdowning/cs371p.git
	git push -u origin master

pull:
	@rsync -r -t -u -v --delete              \
	--include "Hello.c++"                    \
	--include "Assertions.c++"               \
	--include "UnitTests1.c++"               \
	--include "UnitTests2.c++"               \
	--include "UnitTests3.c++"               \
	--include "Coverage1.c++"                \
	--include "Coverage2.c++"                \
	--include "Coverage3.c++"                \
	--exclude "*"                            \
	../../examples/c++/ examples
	@rsync -r -t -u -v --delete              \
	--exclude "*"                            \
	../../exercises/c++/ exercises
	@rsync -r -t -u -v --delete              \
	--include "*.c++"                        \
	--include "*.txt"                        \
	--exclude "*"                            \
	../quizzes/ quizzes
	@rsync -r -t -u -v --delete              \
	--include "collatz/"                     \
	--include "Collatz.c++"                  \
	--include "Collatz.h"                    \
	--include "gitignore.txt"                \
	--include "makefile"                     \
	--include "RunCollatz.c++"               \
	--include "RunCollatz.in.txt"            \
	--include "RunCollatz.out.txt"           \
	--include "TestCollatz.c++"              \
	--include "TestCollatz.out.txt"          \
	--exclude "*"                            \
	../../projects/c++/ projects

#	--include "Exceptions.c++"               \
#	--include "Exceptions2.c++"              \
#	--include "Exceptions3.c++"              \
#	--include "Variables.c++"                \
#	--include "Equal.c++"                    \
#	--include "Operators.c++"                \
#	--include "Consts.c++"                   \
#	--include "Cache.c++"                    \
#	--include "StackVsHeap.c++"              \
#	--include "Arrays.c++"                   \
#	--include "ClassVariables.c++"           \
#	--include "InstanceVariables.c++"        \
#	--include "Methods.c++"                  \
#	--include "Friends.c++"                  \
#	--include "Conversions.c++"              \
#	--include "Inheritance.c++"              \
#	--include "DynamicBinding.c++"           \
#	--include "Shapes.h"                     \
#	--include "AbstractClasses.c++"          \
#	--include "Handle1.h"                    \
#	--include "Handle1.c++"                  \
#	--include "MethodOverriding1.c++"        \
#	--include "MethodOverriding2.c++"        \
#	--include "Handle2.h"                    \
#	--include "Handle2.c++"                  \
#	--include "Handle3.h"                    \
#	--include "Handle3.c++"                  \
#	--include "FunctionGenerics.c++"         \
#	--include "Map.c++"                      \
#	--include "Reduce.c++"                   \
#	--include "MapReduce.c++"                \
#	--include "FunctionDefaults.c++"         \
#	--include "Factorial.c++"                \
#	--include "Iterators.c++"                \
#	--include "ArrayObjects.c++"             \
#	--include "Sequences.c++"                \
#	--include "Vectors.c++"                  \
#	--include "Sets.c++"                     \
#	--include "Maps.c++"                     \
#	--include "Complex.c++"                  \
#	--include "CopyAssignment.c++"           \
#	--include "SharedPtr.c++"                \
#	--include "MultipleInheritance.c++"      \
#	--include "DoubleInheritance.c++"        \
#	--include "VirtualInheritance.c++"       \
#	--include "PublicInheritance.c++"        \
#	--include "ProtectedInheritance.c++"     \
#	--include "PrivateInheritance.c++"       \
#	--include "Singleton.c++"                \

#	--include "Equal.c++"                    \
#	--include "Copy.c++"                     \
#	--include "RangeIterator.c++"            \
#	--include "RangeIterable.c++"            \
#	--include "Vector.c++"                   \
#	--include "Allocator.c++"                \
#	--include "Stack.c++"                    \
#	--include "Queue.c++"                    \
#	--include "PriorityQueue.c++"            \
#	--include "Singleton.c++"                \
#	--include "Complex.c++"                  \

#	@rsync -r -t -u -v --delete              \
#	--include "voting/"                      \
#	--include "gitignore.txt"                \
#	--include "makefile"                     \
#	--exclude "*"                            \
#	../../projects/c++/ projects

#	@rsync -r -t -u -v --delete              \
#	--include "allocator/"                   \
#	--include "Allocator.h"                  \
#	--include "gitignore.txt"                \
#	--include "makefile"                     \
#	--include "TestAllocator.c++"            \
#	--include "TestAllocator.out.txt"        \
#	--exclude "*"                            \
#	../../projects/c++/ projects

#	@rsync -r -t -u -v --delete              \
#	--include "darwin/"                      \
#	--include "gitignore.txt"                \
#	--include "makefile"                     \
#	--include "RunDarwin.c++"                \
#	--include "RunDarwin.out.txt"            \
#	--exclude "*"                            \
#	../../projects/c++/ projects

#	@rsync -r -t -u -v --delete              \
#	--include "life/"                        \
#	--include "gitignore.txt"                \
#	--include "makefile"                     \
#	--include "RunLife.c++"                  \
#	--include "RunLife.out.txt"              \
#	--include "RunLife.in.txt"               \
#	--exclude "*"                            \
#	../../projects/c++/ projects

push:
	git add examples
	git add exercises
	git add projects
	git add quizzes
	git commit -m "another commit"
	git push
	git status

status:
	git branch
	git remote -v
	git status
