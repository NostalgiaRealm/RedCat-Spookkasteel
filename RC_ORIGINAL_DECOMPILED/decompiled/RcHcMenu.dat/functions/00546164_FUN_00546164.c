/*
 * FUN_00546164 at 00546164
 * undefined1 __register FUN_00546164(int param_1, int * param_2)
 * Address ranges: 00546164-005461b6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_00546164(int param_1,int *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  undefined1 local_d;
  
  local_d = 0;
  FUN_004ee2a4(*(uint *)(param_1 + 0x84),(int)param_2);
  uVar1 = FUN_004ee2d0(*(int **)(param_1 + 0x84));
  if ((char)uVar1 != '\0') {
    piVar2 = (int *)FUN_004eee98(*(int **)(param_1 + 0x84));
    local_d = FUN_00494528(piVar2,param_2);
  }
  return local_d;
}

