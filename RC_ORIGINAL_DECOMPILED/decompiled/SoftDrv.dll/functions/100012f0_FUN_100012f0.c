/*
 * FUN_100012f0 at 100012f0
 * undefined FUN_100012f0(void)
 * Address ranges: 100012f0-1000134c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100012f0(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  if (*(int *)(iVar1 + 0x28) == 1) {
    FUN_100014d0(iVar1);
  }
  if ((*(byte *)(iVar1 + 0x20) & 0x40) == 0) {
    piVar2 = *(int **)(iVar1 + 0xc);
    if (piVar2 == (int *)0x0) goto LAB_10001321;
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  *(undefined4 *)(iVar1 + 0xc) = 0;
LAB_10001321:
  piVar2 = *(int **)(iVar1 + 8);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    *(undefined4 *)(iVar1 + 8) = 0;
  }
  FUN_10001350(iVar1);
  FUN_10018dc8(iVar1);
  *param_1 = 0;
  return;
}

