/*
 * FUN_00555f60 at 00555f60
 * undefined FUN_00555f60(void)
 * Address ranges: 00555f60-0055604c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00555f60(int param_1,float param_2)

{
  int iVar1;
  undefined4 *puVar2;
  float10 fVar3;
  undefined1 local_105;
  float local_104;
  undefined4 local_100 [64];
  
  if (*(float *)(param_1 + 0xa0) == 0.0) {
    fVar3 = (float10)FUN_005ad390();
    *(float *)(param_1 + 0xa0) = (float)fVar3;
  }
  else {
    fVar3 = (float10)*(float *)(param_1 + 0xa0);
  }
  if ((float10)param_2 != fVar3) {
    puVar2 = local_100;
    for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    FUN_0060af1b(local_100,0xff,&DAT_0069081c,(double)param_2);
    FUN_005acdb0();
    FUN_00556150();
    if (*(float *)(param_1 + 0xa0) == 0.0) {
      fVar3 = (float10)FUN_005ad390(param_1 + 0x54,&local_105);
      *(float *)(param_1 + 0xa0) = (float)fVar3;
      local_104 = (float)fVar3;
    }
    else {
      local_104 = *(float *)(param_1 + 0xa0);
    }
    FUN_00556570();
    FUN_005c9070();
  }
  return;
}

