/*
 * FUN_00544f90 at 00544f90
 * undefined FUN_00544f90(void)
 * Address ranges: 00544f90-0054502b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_00544f90(int param_1,undefined4 param_2,char param_3,int param_4)

{
  char cVar1;
  char cVar2;
  DWORD DVar3;
  int iVar4;
  
  cVar1 = FUN_005443c0(param_1,param_2);
  if (param_4 != -1) {
    cVar2 = FUN_00544620(param_4,param_2);
    if (cVar2 != '\0') {
      cVar1 = '\x01';
    }
  }
  if (param_3 != '\0') {
    DVar3 = timeGetTime();
    iVar4 = DAT_006ba760;
    if (cVar1 != '\0') {
      if (DAT_006ba760 < *(int *)(param_1 + 0x30)) {
        *(DWORD *)(param_1 + 0x34) = DVar3;
        *(undefined4 *)(param_1 + 0x30) = 0;
        return cVar1;
      }
      iVar4 = FUN_00484d70(DVar3,*(undefined4 *)(param_1 + 0x34));
      *(DWORD *)(param_1 + 0x34) = DVar3;
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + iVar4;
      return '\0';
    }
    *(DWORD *)(param_1 + 0x34) = DVar3;
    *(int *)(param_1 + 0x30) = iVar4 + 1;
  }
  return cVar1;
}

