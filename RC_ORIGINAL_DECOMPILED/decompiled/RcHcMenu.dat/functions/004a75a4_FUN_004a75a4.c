/*
 * FUN_004a75a4 at 004a75a4
 * undefined __register FUN_004a75a4(int * param_1, int param_2, int param_3)
 * Address ranges: 004a75a4-004a7624
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004a75a4(int *param_1,int param_2,int param_3)

{
  char cVar1;
  int *piVar2;
  int iStack00000004;
  int *piStack00000008;
  
  piVar2 = (int *)(**(code **)(*param_1 + 0xa8))();
  cVar1 = (**(code **)(*piVar2 + 0x1c))();
  if (cVar1 == '\0') {
    piStack00000008 = (int *)(**(code **)(*piVar2 + 0x2c))();
    iStack00000004 = (**(code **)(*piVar2 + 0x20))();
  }
  else {
    piStack00000008 = (int *)&DAT_00000064;
    iStack00000004 = 0x32;
  }
  FUN_0049b884((int *)param_1[0x4c],piStack00000008,iStack00000004,(undefined *)0x20);
  FUN_00431dc0(param_1,param_2,param_3,iStack00000004,(int)piStack00000008);
  return;
}

