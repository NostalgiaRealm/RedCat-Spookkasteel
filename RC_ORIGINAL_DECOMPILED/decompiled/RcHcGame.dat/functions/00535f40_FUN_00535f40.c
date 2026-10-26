/*
 * FUN_00535f40 at 00535f40
 * undefined FUN_00535f40(void)
 * Address ranges: 00535f40-00536048
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_00535f40(int *param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  code *pcVar5;
  int unaff_EDI;
  int iStack_38;
  undefined1 auStack_28 [4];
  int iStack_24;
  void *pvStack_18;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0063b8a0;
  pvStack_c = ExceptionList;
  iStack_38 = param_3;
  ExceptionList = &pvStack_c;
  iVar2 = (**(code **)(*param_1 + 0x18))(param_1,param_2);
  if (iVar2 == 0) {
    puVar3 = *(undefined1 **)(param_3 + 4);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_0064a3b4;
    }
    uVar4 = FUN_005ae390(&iStack_38,s_DoCreateGameState___s___returns_N_006a0cc0,puVar3);
    uStack_10 = 0;
    pcVar5 = (code *)FUN_005a07f0(s_result__NULL_006a0c04,
                                  s_D__Work_RCHorror_AdamSource_Adam_0069fb00,0x88a,uVar4);
    (*pcVar5)();
    uStack_10 = 0xffffffff;
    if (unaff_EDI != 0) {
      cVar1 = *(char *)(unaff_EDI + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(unaff_EDI + -1));
      }
      else {
        *(char *)(unaff_EDI + -1) = cVar1 + -1;
      }
    }
  }
  FUN_0060a613(iVar2);
  uVar4 = FUN_0060b060();
  uVar4 = FUN_005ae390(auStack_28,s_CAdamGame__DoCreateGameState___c_006a0c90,uVar4);
  uStack_10 = 1;
  FUN_005aff00(uVar4);
  if (iStack_24 != 0) {
    cVar1 = *(char *)(iStack_24 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(iStack_24 + -1));
    }
    else {
      *(char *)(iStack_24 + -1) = cVar1 + -1;
    }
  }
  ExceptionList = pvStack_18;
  return iVar2;
}

