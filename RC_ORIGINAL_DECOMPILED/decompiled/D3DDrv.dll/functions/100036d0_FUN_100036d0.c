/*
 * FUN_100036d0 at 100036d0
 * undefined4 __thiscall FUN_100036d0(void * this, float param_1, float param_2, float param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 100036d0-100037af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_100036d0(void *this,float param_1,float param_2,float param_3,undefined4 param_4,
            undefined4 param_5)

{
  float *pfVar1;
  int iVar2;
  float local_50 [5];
  float local_3c;
  float local_38;
  float local_34;
  undefined4 local_4;
  
  _DAT_10038e84 = param_1;
  _DAT_10038e88 = param_2;
  _DAT_10038e8c = param_3;
  _DAT_10038e7c = param_4;
  _DAT_10038e80 = param_5;
  pfVar1 = local_50;
  for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar1 = 0.0;
    pfVar1 = pfVar1 + 1;
  }
  local_50[0] = 1.12104e-43;
  if (this == (void *)0x0) {
    local_3c = 0.0;
    local_38 = 0.0;
    local_34 = 0.0;
  }
  else {
    local_3c = param_1 * 0.003921569;
    local_38 = param_2 * 0.003921569;
    local_34 = param_3 * 0.003921569;
  }
  local_4 = 0x10;
  DAT_10038e78 = this;
  local_50[1] = local_3c;
  local_50[2] = local_38;
  local_50[3] = local_34;
  (**(code **)(*DAT_100274d0 + 0xc))(DAT_100274d0,local_50);
  return 1;
}

