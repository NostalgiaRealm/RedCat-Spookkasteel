/*
 * FUN_00513250 at 00513250
 * undefined FUN_00513250(void)
 * Address ranges: 00513250-00513338
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_00513250(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  code *pcVar3;
  int iVar4;
  undefined4 local_20;
  undefined1 local_1c [4];
  int iStack_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006377d8;
  local_c = ExceptionList;
  local_20 = *(undefined4 *)(param_1 + 0x1e0);
  ExceptionList = &local_c;
  FUN_0053cff0(*(undefined4 *)(param_1 + 0x1b0),1,&local_20);
  iVar4 = *(int *)(param_1 + 0x1e0) + 1;
  *(int *)(param_1 + 0x1e0) = iVar4;
  if (0xff < iVar4) {
    *(undefined4 *)(param_1 + 0x1e0) = 0;
  }
  if (*(int *)(param_1 + 0x1e0) == *(int *)(param_1 + 0x1dc)) {
    uVar2 = FUN_005ae390(local_1c,s_Too_many_lock_requests__0069eff8);
    local_4 = 0;
    pcVar3 = (code *)FUN_005a07f0(s_m_NewLockID____m_CurrentLockID_0069efd8,
                                  s_D__Work_RCHorror_AdamSource_Adam_0069ebac,0x35b,uVar2);
    (*pcVar3)();
    if (iStack_18 != 0) {
      cVar1 = *(char *)(iStack_18 + -1);
      if ((cVar1 != '\0') && (cVar1 != -1)) {
        *(char *)(iStack_18 + -1) = cVar1 + -1;
        ExceptionList = local_c;
        return local_20;
      }
      FUN_005fe5f0((char *)(iStack_18 + -1));
    }
  }
  ExceptionList = local_c;
  return local_20;
}

