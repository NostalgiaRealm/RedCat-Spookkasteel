/*
 * FUN_10001c00 at 10001c00
 * undefined FUN_10001c00(void)
 * Address ranges: 10001c00-10001ccb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10001c00(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  float *pfVar5;
  undefined1 *puVar6;
  undefined1 local_1c [4];
  int local_18;
  float local_14 [5];
  
  local_18 = FUN_10001750(6);
  *(undefined4 *)(local_18 + 0x28) = 6;
  puVar6 = (undefined1 *)(local_18 + 0x34);
  iVar4 = param_2 - (int)local_14;
  pfVar5 = local_14;
  param_2 = 3;
  do {
    FUN_100145f0();
    fVar1 = *(float *)(iVar4 + (int)pfVar5);
    *pfVar5 = 1.0;
    local_14[3] = fVar1 + 1.0;
    uVar3 = FUN_10002b50(local_14,local_1c);
    *(undefined4 *)(puVar6 + -4) = uVar3;
    *puVar6 = local_1c[0];
    fVar1 = *(float *)((int)pfVar5 + (param_1 - (int)local_14));
    *pfVar5 = -1.0;
    local_14[3] = -(fVar1 - 1.0);
    uVar3 = FUN_10002b50(local_14,local_1c);
    iVar2 = local_18;
    *(undefined4 *)(puVar6 + 0x38) = uVar3;
    puVar6[0x3c] = local_1c[0];
    pfVar5 = pfVar5 + 1;
    puVar6 = puVar6 + 0x14;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  FUN_10001b20(local_18);
  return iVar2;
}

