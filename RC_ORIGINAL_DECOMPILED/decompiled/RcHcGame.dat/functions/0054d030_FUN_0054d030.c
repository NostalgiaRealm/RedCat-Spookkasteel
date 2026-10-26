/*
 * FUN_0054d030 at 0054d030
 * undefined FUN_0054d030(void)
 * Address ranges: 0054d030-0054d132
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float10 FUN_0054d030(float param_1)

{
  char cVar1;
  float10 fVar2;
  float10 fVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined4 uVar7;
  float local_20;
  undefined1 local_1c [4];
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063d798;
  local_c = ExceptionList;
  if (0.0 < param_1) {
    fVar2 = (float10)log2((float10)param_1);
    fVar3 = (float10)log2((float10)2.0);
    local_20 = (float)((((float10)0.6931471805599453 * fVar2) /
                       ((float10)0.6931471805599453 * fVar3)) * (float10)0.1 + (float10)1.0);
  }
  else {
    local_20 = 0.0;
  }
  ExceptionList = &local_c;
  iVar4 = FUN_00516fb0();
  iVar6 = *(int *)(iVar4 + 100);
  if (iVar6 == -0x80000000) {
    puVar5 = *(undefined1 **)(iVar4 + 0x18);
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &DAT_0064a3b4;
    }
    iVar6 = FUN_0060af10(puVar5);
    *(int *)(iVar4 + 100) = iVar6;
  }
  if (iVar6 != 0) {
    uVar7 = FUN_005ae390(local_1c,s_CAdamSoundSystem__LinToLog___f___006a1860,(double)param_1,
                         (double)local_20);
    local_4 = 0;
    FUN_005aff00(uVar7);
    if (local_18 != 0) {
      cVar1 = *(char *)(local_18 + -1);
      if ((cVar1 != '\0') && (cVar1 != -1)) {
        *(char *)(local_18 + -1) = cVar1 + -1;
        ExceptionList = local_c;
        return (float10)local_20;
      }
      FUN_005fe5f0();
    }
  }
  ExceptionList = local_c;
  return (float10)local_20;
}

