/*
 * FUN_004f009c at 004f009c
 * undefined __register FUN_004f009c(int * param_1)
 * Address ranges: 004f009c-004f00da
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f009c(int *param_1)

{
  int *piVar1;
  int iVar2;
  int extraout_EDX;
  
  piVar1 = (int *)(**(code **)(*param_1 + 0xd0))();
  iVar2 = param_1[0xe] + -2;
  if (SBORROW4(param_1[0xe],2)) {
    piVar1 = (int *)thunk_FUN_00402874((uint)piVar1);
    iVar2 = extraout_EDX;
  }
  FUN_00431f78(piVar1,iVar2);
  piVar1 = (int *)(**(code **)(*param_1 + 0xd0))();
  FUN_00431f98(piVar1,0x78);
  return;
}

