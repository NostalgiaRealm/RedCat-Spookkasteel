/*
 * FUN_0044088c at 0044088c
 * undefined __register FUN_0044088c(undefined2 param_1, int * param_2)
 * Address ranges: 0044088c-004408df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0044088c(undefined2 param_1,int *param_2)

{
  UINT UVar1;
  CHAR local_106 [256];
  undefined2 local_6;
  
  local_6 = param_1;
  FUN_00403db0(param_2);
  UVar1 = MapVirtualKeyA((uint)(byte)local_6,0);
  if (UVar1 << 0x10 != 0) {
    GetKeyNameTextA(UVar1 << 0x10,local_106,0x100);
    FUN_00403fe0(param_2,local_106,0x100);
  }
  return;
}

