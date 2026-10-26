/*
 * FUN_004a2298 at 004a2298
 * int * __register FUN_004a2298(int param_1, uint param_2)
 * Address ranges: 004a2298-004a22d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_004a2298(int param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  undefined4 local_10;
  
  iVar2 = FUN_004a20c0(param_1,param_2);
  local_10 = *(int **)(iVar2 + 0xc);
  cVar1 = (**(code **)(*local_10 + 0x1c))();
  if (cVar1 != '\0') {
    iVar2 = FUN_004a20c0(param_1,0);
    local_10 = *(int **)(iVar2 + 0xc);
  }
  return local_10;
}

