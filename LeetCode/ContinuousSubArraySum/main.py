class Solution(object):
    def checkSubarraySum(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: bool

        """
        #En caso de que el arreglo sea menor a 2 devolver False
        if len(nums) < 2:
            return False
        #Se crea una variable para guardar el total
        total = 0
        #Se crea un diccionario para guardar los resultados de los modulos
        modular_map = {
            0: -1
        }
        #Se recorre el arreglo
        for i in range(len(nums)):
            #Se suma el valor actual al total
            total += nums[i]
            if k != 0:
            #Se calcula el modulo
                total = total % k
            #Si el modulo ya existe en el diccionario
            if total in modular_map:
                #La diferencia entre el indice actual y el indice guardado 
                #en el diccionario nos indica el rango del subarreglo
                if i - modular_map[total] > 1:
                    return True
            else:
                #Se guarda el modulo y el indice actual
                modular_map[total] = i            
        return False    
