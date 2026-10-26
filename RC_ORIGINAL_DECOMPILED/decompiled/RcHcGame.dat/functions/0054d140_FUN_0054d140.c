/*
 * FUN_0054d140 at 0054d140
 * undefined FUN_0054d140(void)
 * Address ranges: 0054d140-0054d222
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float10 FUN_0054d140(float param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 uVar6;
  float10 fVar7;
  undefined1 local_1c [4];
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063d7b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  fVar7 = (float10)FUN_0060b760();
  fVar1 = (float)fVar7;
  iVar3 = FUN_00516fb0();
  iVar5 = *(int *)(iVar3 + 100);
  if (iVar5 == -0x80000000) {
    puVar4 = *(undefined1 **)(iVar3 + 0x18);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0064a3b4;
    }
    iVar5 = FUN_0060af10(puVar4);
    *(int *)(iVar3 + 100) = iVar5;
  }
  if (iVar5 != 0) {
    uVar6 = FUN_005ae390(local_1c,s_CAdamSoundSystem__LogToLin___f___006a1888,(double)param_1,
                         (double)fVar1);
    local_4 = 0;
    FUN_005aff00(uVar6);
    if (local_18 != 0) {
      cVar2 = *(char *)(local_18 + -1);
      if ((cVar2 != '\0') && (cVar2 != -1)) {
        *(char *)(local_18 + -1) = cVar2 + -1;
        ExceptionList = local_c;
        return (float10)fVar1;
      }
      FUN_005fe5f0();
    }
  }
  ExceptionList = local_c;
  return (float10)fVar1;
}

