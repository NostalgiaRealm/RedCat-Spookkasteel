/*
 * FUN_00556400 at 00556400
 * undefined FUN_00556400(void)
 * Address ranges: 00556400-0055652a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00556400(int param_1,char param_2)

{
  undefined4 *puVar1;
  float10 fVar2;
  float fVar3;
  
  if (param_2 != *(char *)(param_1 + 0x1ac)) {
    *(char *)(param_1 + 0x1ac) = param_2;
    puVar1 = (undefined4 *)(param_1 + 0x18c);
    if (param_2 == '\0') {
      *puVar1 = *(undefined4 *)(param_1 + 0x19c);
      *(undefined4 *)(param_1 + 400) = *(undefined4 *)(param_1 + 0x1a0);
      *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(param_1 + 0x1a4);
      *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(param_1 + 0x1a8);
      if (*(float *)(param_1 + 0xa0) == 0.0) {
        fVar2 = (float10)FUN_005ad390(param_1 + 0x54,&param_2);
        *(float *)(param_1 + 0xa0) = (float)fVar2;
        fVar3 = (float)fVar2;
      }
      else {
        fVar3 = *(float *)(param_1 + 0xa0);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x19c) = *puVar1;
      *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_1 + 400);
      *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(param_1 + 0x194);
      *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(param_1 + 0x198);
      *(int *)(param_1 + 400) = *(int *)(param_1 + 0xac) + -1;
      *puVar1 = 0;
      *(int *)(param_1 + 0x194) = *(int *)(param_1 + 0xb0) / 2;
      *(int *)(param_1 + 0x198) = *(int *)(param_1 + 0xb0) + -1;
      if (*(float *)(param_1 + 0xa0) == 0.0) {
        fVar2 = (float10)FUN_005ad390(param_1 + 0x54,&param_2);
        *(float *)(param_1 + 0xa0) = (float)fVar2;
        fVar3 = (float)fVar2;
      }
      else {
        fVar3 = *(float *)(param_1 + 0xa0);
      }
    }
    FUN_00556570(fVar3);
    FUN_005c9070(fVar3);
  }
  return;
}

