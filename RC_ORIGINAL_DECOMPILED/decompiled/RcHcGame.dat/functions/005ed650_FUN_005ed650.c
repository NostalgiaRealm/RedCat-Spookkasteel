/*
 * FUN_005ed650 at 005ed650
 * undefined FUN_005ed650(void)
 * Address ranges: 005ed650-005ed737
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_005ed650(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined4 unaff_retaddr;
  int local_1c [3];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006471e8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar2 = (**(code **)(*param_1 + 0x30))(local_1c);
  puVar3 = *(undefined1 **)(iVar2 + 4);
  puStack_8 = (undefined1 *)0x0;
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = &DAT_0064a3b4;
  }
  FUN_005e5d20(unaff_retaddr,puVar3);
  uVar4 = FUN_005e5d20(unaff_retaddr,&DAT_006b125c,param_1 + 10,&DAT_006b1260,param_1 + 0x10,
                       param_1 + 0x15,param_1 + 0x1a);
  uVar4 = FUN_005ed360(uVar4);
  uVar4 = FUN_005e5d20(uVar4);
  uVar4 = FUN_005ed360(uVar4);
  uVar4 = FUN_005ed360(uVar4);
  uVar4 = FUN_005f0e50(uVar4);
  if (local_1c[0] != 0) {
    cVar1 = *(char *)(local_1c[0] + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(local_1c[0] + -1) = cVar1 + -1;
      ExceptionList = pvStack_10;
      return uVar4;
    }
    FUN_005fe5f0((char *)(local_1c[0] + -1));
  }
  ExceptionList = pvStack_10;
  return uVar4;
}

