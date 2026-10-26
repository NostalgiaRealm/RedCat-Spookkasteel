/*
 * FUN_005f1e60 at 005f1e60
 * undefined FUN_005f1e60(void)
 * Address ranges: 005f1e60-005f1f22
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_005f1e60(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined4 unaff_retaddr;
  int local_1c [3];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00647b48;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar2 = (**(code **)(*param_1 + 0x30))(local_1c);
  puStack_8 = (undefined1 *)0x0;
  uVar3 = FUN_005e5d20(unaff_retaddr,s_Method_006b140c);
  puVar4 = *(undefined1 **)(iVar2 + 4);
  if (puVar4 == (undefined1 *)0x0) {
    puVar4 = &DAT_0064a3b4;
  }
  FUN_005e5d20(uVar3,puVar4);
  uVar3 = FUN_005e5d20(uVar3,&DAT_006b125c,param_1 + 10,&DAT_006b1260);
  uVar3 = FUN_005ed360(uVar3);
  uVar3 = FUN_005e5d20(uVar3);
  if (local_1c[0] != 0) {
    cVar1 = *(char *)(local_1c[0] + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(local_1c[0] + -1));
    }
    else {
      *(char *)(local_1c[0] + -1) = cVar1 + -1;
    }
  }
  ExceptionList = pvStack_10;
  return uVar3;
}

