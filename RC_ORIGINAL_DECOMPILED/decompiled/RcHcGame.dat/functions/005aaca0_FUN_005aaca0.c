/*
 * FUN_005aaca0 at 005aaca0
 * undefined FUN_005aaca0(void)
 * Address ranges: 005aaca0-005aadce
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005aaca0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00645ae8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((*(char *)(param_1 + 0x5b) != '\0') && (ExceptionList = &local_c, DAT_006cad54 != '\0')) {
    ExceptionList = &local_c;
    FUN_005a7130(&DAT_006cac38);
    FUN_005a70c0(&DAT_006cac20);
    iVar2 = FUN_00517af0();
    iVar4 = *(int *)(iVar2 + 100);
    if (iVar4 == -0x80000000) {
      puVar3 = *(undefined1 **)(iVar2 + 0x18);
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_0064a3b4;
      }
      iVar4 = FUN_0060af10(puVar3);
      *(int *)(iVar2 + 100) = iVar4;
    }
    if (iVar4 != 0) {
      uVar5 = FUN_005ae390(local_1c,s_DINPUT_Mouse_at____d___d___from___006a8c04,DAT_006cac24,
                           DAT_006cac28,DAT_006cac2c,DAT_006cac30);
      local_4 = 0;
      FUN_005aff00(uVar5);
      local_4 = 0xffffffff;
      if (local_18 != 0) {
        cVar1 = *(char *)(local_18 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0((char *)(local_18 + -1));
        }
        else {
          *(char *)(local_18 + -1) = cVar1 + -1;
        }
      }
      local_18 = 0;
      local_14 = 0;
      local_10 = 0;
    }
    *(undefined4 *)(param_1 + 0x6c) = DAT_006cac24;
    *(undefined4 *)(param_1 + 0x70) = DAT_006cac28;
    *(undefined1 *)(param_1 + 0x14) = DAT_006cac20;
    *(undefined1 *)(param_1 + 0x15) = DAT_006cac21;
    *(undefined1 *)(param_1 + 0x16) = DAT_006cac22;
  }
  FUN_005a6440();
  ExceptionList = local_c;
  return;
}

