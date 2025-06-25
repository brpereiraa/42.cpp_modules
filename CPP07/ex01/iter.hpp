#ifndef ITER_HPP
# define ITER_HPP

template <typename T, typename F>
void iter(T arr, int len, F funct) {
        for (int i = 0; i < len; i++){
                funct(arr[i]);
        }
}

#endif 
