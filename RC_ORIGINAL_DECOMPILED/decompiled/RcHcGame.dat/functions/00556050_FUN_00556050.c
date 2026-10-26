/*
 * FUN_00556050 at 00556050
 * undefined FUN_00556050(void)
 * Address ranges: 00556050-0055614b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00556050(int param_1,float param_2)

{
  int iVar1;
  undefined4 *puVar2;
  float10 fVar3;
  undefined4 local_100 [64];
  
  if (*(float *)(param_1 + 0x180) == 0.0) {
    fVar3 = (float10)FUN_005ad390();
    *(float *)(param_1 + 0x180) = (float)fVar3;
  }
  else {
    fVar3 = (float10)*(float *)(param_1 + 0x180);
  }
  if (fVar3 != (float10)param_2) {
    FUN_00556570();
    FUN_005c8fa0();
    FUN_00556570();
    fVar3 = (float10)FUN_005c8fb0();
    puVar2 = local_100;
    for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    FUN_0060af1b(local_100,0xff,&DAT_0069081c,(double)fVar3);
    FUN_005acdb0();
    iVar1 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      iVar1 = FUN_0055b280();
    }
    if (*(char *)(iVar1 + 0x67d) != '\0') {
      if (DAT_006c8de0 == 0) {
        iVar1 = FUN_0055b280();
        *(undefined1 *)(iVar1 + 0x67c) = 1;
        return;
      }
      *(undefined1 *)(DAT_006c8de0 + 0x67c) = 1;
    }
  }
  return;
}

