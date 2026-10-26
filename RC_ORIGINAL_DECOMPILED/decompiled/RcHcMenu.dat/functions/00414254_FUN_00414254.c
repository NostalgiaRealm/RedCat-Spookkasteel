/*
 * FUN_00414254 at 00414254
 * int __register FUN_00414254(int * param_1, undefined4 * param_2, int param_3)
 * Address ranges: 00414254-004142a8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00414254(int *param_1,undefined4 *param_2,int param_3)

{
  char cVar1;
  int local_10;
  
  if ((char)param_1[6] == '\0') {
    local_10 = param_1[4];
  }
  else {
    local_10 = param_3;
    cVar1 = (**(code **)(*param_1 + 0x78))(param_1,param_2,&local_10);
    if (cVar1 != '\0') {
      if (*(char *)((int)param_1 + 0x19) == '\0') {
        return local_10;
      }
      if (*(char *)((int)param_1 + 0x19) == '\x02') {
        FUN_00413734(param_1,(undefined4 *)PTR_PTR_00572188,0);
      }
    }
  }
  FUN_0041457c(param_1,local_10,param_2);
  return local_10;
}

