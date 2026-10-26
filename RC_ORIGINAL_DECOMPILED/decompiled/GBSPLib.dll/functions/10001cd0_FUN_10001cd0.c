/*
 * FUN_10001cd0 at 10001cd0
 * undefined FUN_10001cd0(void)
 * Address ranges: 10001cd0-10001d99
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10001cd0(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  float local_10;
  undefined4 local_c;
  int *local_8;
  int local_4;
  
  uVar2 = 1;
  local_10 = 0.0;
  local_c = 1;
  local_4 = 0;
  if (0 < *(int *)(param_1 + 0x28)) {
    local_8 = (int *)(param_1 + 0x2c);
    do {
      piVar1 = (int *)*local_8;
      if ((piVar1 != (int *)0x0) && (iVar3 = 0, 0 < *piVar1)) {
        do {
          fVar4 = (float10)FUN_100143d0();
          fVar4 = fVar4 - (float10)*(float *)(param_2 + 0xc);
          if ((float10)local_10 < fVar4) {
            local_10 = (float)fVar4;
            local_c = 1;
          }
          if ((float10)local_10 < -fVar4) {
            local_10 = (float)-fVar4;
            local_c = 2;
          }
          iVar3 = iVar3 + 1;
          uVar2 = local_c;
        } while (iVar3 < *piVar1);
      }
      local_4 = local_4 + 1;
      local_8 = local_8 + 5;
    } while (local_4 < *(int *)(param_1 + 0x28));
  }
  return uVar2;
}

