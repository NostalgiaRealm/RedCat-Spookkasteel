/*
 * FUN_00588710 at 00588710
 * undefined FUN_00588710(void)
 * Address ranges: 00588710-0058887b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_00588710(undefined4 *param_1,int param_2,undefined4 param_3)

{
  float *pfVar1;
  int iVar2;
  undefined1 *puVar3;
  float10 fVar4;
  float10 fVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00642e3e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00501cb0(param_2);
  local_4 = 0;
  param_1[0x3e] = param_3;
  FUN_0060b1db(param_1 + 0x3f,4,5,&LAB_00468f40,FUN_0057d310);
  param_1[0x44] = 0;
  param_1[0x5e5] = 0x1e;
  param_1[0x8b8] = 3;
  param_1[0x8b9] = 5;
  param_1[0x8ba] = 8;
  param_1[0x8bb] = 0x40000000;
  param_1[0x8bc] = 0xffffffff;
  param_1[0x8bd] = 0xffffffff;
  param_1[0x8be] = 0x3f800000;
  *(undefined1 *)(param_1 + 0x8bf) = 1;
  iVar2 = 0;
  param_1[0x8c1] = 0;
  *param_1 = &PTR_FUN_0064fdc0;
  if (0 < (int)(param_1[0x8b9] * param_1[0x8b8] * param_1[0x8ba])) {
    puVar3 = (undefined1 *)((int)param_1 + 0x13d);
    do {
      puVar3[-1] = 0;
      *puVar3 = 0;
      FUN_0060a4a0();
      FUN_0060a4a0();
      *(undefined4 *)(puVar3 + -0x1d) = 0;
      *(undefined4 *)(puVar3 + -0x19) = 0xc3960000;
      FUN_0060a4a0();
      FUN_0060a4a0();
      *(undefined4 *)(puVar3 + -0x15) = 0;
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 0x30;
    } while (iVar2 < (int)(param_1[0x8b9] * param_1[0x8b8] * param_1[0x8ba]));
  }
  param_2 = 0;
  pfVar1 = (float *)(param_1 + 0x74f);
  do {
    fVar4 = (float10)param_2;
    param_2 = param_2 + 1;
    fVar5 = (float10)fcos(fVar4 * (float10)0.017453292);
    pfVar1[-0x169] = (float)fVar5;
    fVar4 = (float10)fsin(fVar4 * (float10)0.017453292);
    *pfVar1 = (float)fVar4;
    pfVar1 = pfVar1 + 1;
  } while (param_2 < 0x169);
  *(undefined1 *)(param_1 + 0x8c0) = 0;
  ExceptionList = local_c;
  return param_1;
}

