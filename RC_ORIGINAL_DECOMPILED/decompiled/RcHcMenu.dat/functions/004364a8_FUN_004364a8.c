/*
 * FUN_004364a8 at 004364a8
 * bool __register FUN_004364a8(HWND param_1, int * param_2)
 * Address ranges: 004364a8-004364da
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_004364a8(HWND param_1,int *param_2)

{
  HANDLE pvVar1;
  int iVar2;
  
  pvVar1 = FUN_0042f92c(param_1);
  if (pvVar1 != (HANDLE)0x0) {
    iVar2 = FUN_00433700((int)pvVar1,*param_2 + 0xbc00,param_2[1],param_2[2]);
    param_2[3] = iVar2;
  }
  return pvVar1 != (HANDLE)0x0;
}

