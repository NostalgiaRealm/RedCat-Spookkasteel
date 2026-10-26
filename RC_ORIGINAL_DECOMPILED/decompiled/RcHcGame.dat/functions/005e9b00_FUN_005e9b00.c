/*
 * FUN_005e9b00 at 005e9b00
 * undefined FUN_005e9b00(void)
 * Address ranges: 005e9b00-005e9be4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_005e9b00(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined2 param_5
            )

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_1c [4];
  int iStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00646ce8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar2 = FUN_005e9f10();
  *(undefined4 *)(param_1 + 4) = uVar2;
  *(undefined4 *)(param_1 + 8) = param_4;
  FUN_005e6cd0(param_2,param_1 + 0xc);
  FUN_005eee20(param_2,param_3);
  *(undefined2 *)(param_1 + 0x24) = param_5;
  iVar3 = FUN_005eeb80(auStack_1c,*(undefined4 *)(param_1 + 0x20));
  puVar4 = *(undefined1 **)(iVar3 + 4);
  uStack_4 = 0;
  if (puVar4 == (undefined1 *)0x0) {
    puVar4 = &DAT_0064a3b4;
  }
  puVar5 = &DAT_0064a3b4;
  if (*(undefined1 **)(param_1 + 0x10) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_1 + 0x10);
  }
  FUN_005e4140(s_Basic_item_info_has_been_read__n_006b107c,puVar5,puVar4,
               (int)*(short *)(param_1 + 0x24));
  if (iStack_18 != 0) {
    cVar1 = *(char *)(iStack_18 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(iStack_18 + -1) = cVar1 + -1;
      ExceptionList = pvStack_c;
      return;
    }
    FUN_005fe5f0((char *)(iStack_18 + -1));
  }
  ExceptionList = pvStack_c;
  return;
}

