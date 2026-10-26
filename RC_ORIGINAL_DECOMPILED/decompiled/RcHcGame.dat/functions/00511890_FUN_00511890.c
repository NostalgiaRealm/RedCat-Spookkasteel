/*
 * FUN_00511890 at 00511890
 * undefined FUN_00511890(void)
 * Address ranges: 00511890-00511935
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00511890(int param_1)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined1 local_1c [4];
  int iStack_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00637558;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_00511810(param_1);
  if (iVar2 == -1) {
    puVar3 = *(undefined1 **)(param_1 + 4);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_0064a3b4;
    }
    uVar4 = FUN_005ae390(local_1c,s_No_such_portrait___s___0069edb4,puVar3);
    local_4 = 0;
    pcVar5 = (code *)FUN_005a07f0(s_index_____1_0069eda8,s_D__Work_RCHorror_AdamSource_Adam_0069ebac
                                  ,0x122,uVar4);
    (*pcVar5)();
    if (iStack_18 != 0) {
      cVar1 = *(char *)(iStack_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(iStack_18 + -1));
      }
      else {
        *(char *)(iStack_18 + -1) = cVar1 + -1;
      }
    }
  }
  ExceptionList = local_c;
  return iVar2;
}

