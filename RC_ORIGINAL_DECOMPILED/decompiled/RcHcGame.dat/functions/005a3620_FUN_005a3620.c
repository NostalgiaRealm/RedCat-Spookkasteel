/*
 * FUN_005a3620 at 005a3620
 * undefined FUN_005a3620(void)
 * Address ranges: 005a3620-005a36bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_005a3620(int param_1)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined1 local_1c [4];
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00645238;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x14) != 0) {
    ExceptionList = &local_c;
    iVar2 = FUN_005cd320();
    if (iVar2 == 0) {
      puVar3 = *(undefined1 **)(param_1 + 0x1c);
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_0064a3b4;
      }
      uVar4 = FUN_005ae390(local_1c,s_geVFile_Close___s___fails_006a7b74,puVar3);
      local_4 = 0;
      FUN_005aff20(s_D__Work_RCHorror_AdamSource_Davi_006a7a50,0x1eb,uVar4);
      if (local_18 != 0) {
        cVar1 = *(char *)(local_18 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0((char *)(local_18 + -1));
        }
        else {
          *(char *)(local_18 + -1) = cVar1 + -1;
        }
      }
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  ExceptionList = local_c;
  return 1;
}

