/*
 * FUN_004a85b0 at 004a85b0
 * undefined FUN_004a85b0(void)
 * Address ranges: 004a85b0-004a86cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004a85b0(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  float *pfVar5;
  undefined4 uVar6;
  undefined1 local_40 [8];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [20];
  undefined1 auStack_1c [4];
  int iStack_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0062dc78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0056f9b0();
  if (*(char *)((int)param_1 + 0xa9) != '\0') {
    iVar2 = FUN_00517f70();
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
      puVar3 = (undefined1 *)param_1[0x18];
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_0064a3b4;
      }
      iVar4 = (**(code **)(*param_1 + 0x48))(local_40);
      iVar4 = (**(code **)(*param_1 + 0x48))(auStack_38,(double)*(float *)(iVar4 + 8));
      pfVar5 = (float *)(**(code **)(*param_1 + 0x48))(auStack_30,(double)*(float *)(iVar4 + 4));
      uVar6 = FUN_005ae390(auStack_1c,s_AnyActor__s_is_at____f___f___f___00695dd4,puVar3,
                           (double)*pfVar5);
      uStack_4 = 0;
      FUN_005aff00(uVar6);
      if (iStack_18 != 0) {
        cVar1 = *(char *)(iStack_18 + -1);
        if ((cVar1 != '\0') && (cVar1 != -1)) {
          *(char *)(iStack_18 + -1) = cVar1 + -1;
          ExceptionList = local_c;
          return;
        }
        FUN_005fe5f0((char *)(iStack_18 + -1));
      }
    }
  }
  ExceptionList = local_c;
  return;
}

