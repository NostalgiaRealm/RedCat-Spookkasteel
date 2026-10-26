/*
 * FUN_004b8180 at 004b8180
 * undefined FUN_004b8180(void)
 * Address ranges: 004b8180-004b821b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004b8180(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0062f028;
  local_c = ExceptionList;
  iVar2 = *(int *)(param_1 + 0x180);
  local_4 = 0;
  ExceptionList = &local_c;
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      ExceptionList = &local_c;
      FUN_005fe5f0((char *)(iVar2 + -1));
    }
    else {
      ExceptionList = &local_c;
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)(param_1 + 0x180) = 0;
  *(undefined4 *)(param_1 + 0x184) = 0;
  *(undefined4 *)(param_1 + 0x188) = 0;
  iVar2 = *(int *)(param_1 + 0x178);
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 0x14) + -1;
    *(int *)(iVar2 + 0x14) = iVar3;
    if (iVar3 == 0) {
      FUN_005abfc0(0);
    }
    *(undefined4 *)(param_1 + 0x178) = 0;
  }
  local_4 = 0xffffffff;
  FUN_004b8fb0();
  ExceptionList = local_c;
  return;
}

