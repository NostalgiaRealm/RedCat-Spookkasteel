/*
 * FUN_0059d420 at 0059d420
 * undefined FUN_0059d420(void)
 * Address ranges: 0059d420-0059d5cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0059d420(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  float10 extraout_ST0;
  float10 fVar4;
  float in_stack_00000020;
  int local_34;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00644968;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_005b30a0();
  iVar2 = __ftol();
  if ((float10)iVar2 * (float10)in_stack_00000020 < extraout_ST0) {
    iVar2 = iVar2 + 1;
  }
  FUN_005b2fe0();
  local_34 = 1;
  if (1 < iVar2) {
    do {
      FUN_005b3020();
      iVar3 = FUN_0059aed0();
      if (*(float *)(iVar3 + 0x354) == 0.0) {
        fVar4 = (float10)FUN_005ad390();
        *(float *)(iVar3 + 0x354) = (float)fVar4;
      }
      FUN_00449760(&param_1);
      cVar1 = FUN_00594df0();
      if (cVar1 != '\0') {
        local_4 = 0xffffffff;
        if (param_1 != 0) {
          iVar2 = *(int *)(param_1 + 0x14) + -1;
          *(int *)(param_1 + 0x14) = iVar2;
          if (iVar2 == 0) {
            FUN_005abfc0();
          }
        }
        ExceptionList = local_c;
        return 1;
      }
      local_34 = local_34 + 1;
    } while (local_34 < iVar2);
  }
  local_4 = 0xffffffff;
  if (param_1 != 0) {
    iVar2 = *(int *)(param_1 + 0x14) + -1;
    *(int *)(param_1 + 0x14) = iVar2;
    if (iVar2 == 0) {
      FUN_005abfc0();
    }
  }
  ExceptionList = local_c;
  return 0;
}

