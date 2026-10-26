/*
 * FUN_005bd8d0 at 005bd8d0
 * undefined FUN_005bd8d0(void)
 * Address ranges: 005bd8d0-005bda74
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_005bd8d0(int param_1,float param_2,undefined4 *param_3,float *param_4)

{
  float fVar1;
  int iVar2;
  int local_48;
  int local_44;
  int local_40;
  float local_38;
  float local_34;
  float local_30;
  float local_2c [3];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar2 = *(int *)(param_1 + 0xc);
  local_48 = 0;
  if (iVar2 == 0) {
    return 0;
  }
  if (iVar2 == 1) {
    if (*(int *)(param_1 + 0x10) == 0) {
      FUN_005b3070();
      FUN_005b5fd0();
      return 1;
    }
    local_40 = 0;
    if (0 < *(int *)(param_1 + 0x10)) {
      local_44 = 0;
      do {
        fVar1 = (param_2 - *(float *)(*(int *)(param_1 + 0x18) + 4 + local_44)) *
                *(float *)(*(int *)(param_1 + 0x18) + local_44);
        iVar2 = FUN_005bd8d0(fVar1,&local_20,&local_38);
        if (iVar2 != 0) {
          if (local_48 == 0) {
            local_48 = 1;
            *param_3 = local_20;
            param_3[1] = local_1c;
            param_3[2] = local_18;
            param_3[3] = local_14;
            *param_4 = local_38;
            param_4[1] = local_34;
            param_4[2] = local_30;
          }
          else {
            FUN_005c5890(fVar1,local_2c);
            FUN_005b59f0(local_2c[0],param_3);
            *param_4 = (local_38 - *param_4) * local_2c[0] + *param_4;
            param_4[1] = (local_34 - param_4[1]) * local_2c[0] + param_4[1];
            param_4[2] = (local_30 - param_4[2]) * local_2c[0] + param_4[2];
          }
        }
        local_40 = local_40 + 1;
        local_44 = local_44 + 0x44;
      } while (local_40 < *(int *)(param_1 + 0x10));
    }
  }
  else if (iVar2 == 2) {
    iVar2 = FUN_005bd700();
    if (iVar2 == 0) {
      return 0;
    }
    FUN_005c5890(param_2,param_4);
    return 1;
  }
  return local_48;
}

