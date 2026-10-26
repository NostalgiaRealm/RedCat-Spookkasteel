/*
 * FUN_100030d0 at 100030d0
 * undefined4 __fastcall FUN_100030d0(int param_1, int param_2)
 * Address ranges: 100030d0-100031c0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_100030d0(int param_1,int param_2)

{
  bool bVar1;
  float fVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  longlong lVar6;
  int local_f04;
  undefined1 local_f00 [16];
  undefined4 local_ef0 [956];
  
  if (0 < param_2) {
    puVar3 = local_ef0;
    local_f04 = param_2;
    do {
      fVar2 = 1.0 / *(float *)(param_1 + 8);
      puVar3[-1] = 0x437f0000;
      *puVar3 = 0x437f0000;
      puVar3[1] = 0x437f0000;
      puVar3[3] = 0x437f0000;
      puVar3[2] = 65535.0 / *(float *)(param_1 + 8);
      puVar3[4] = fVar2;
      puVar3[7] = fVar2;
      lVar6 = __ftol();
      puVar3[-4] = (float)(int)lVar6 * 0.0625;
      lVar6 = __ftol();
      param_1 = param_1 + 0x24;
      local_f04 = local_f04 + -1;
      puVar3[-3] = (float)(int)lVar6 * 0.0625;
      puVar3 = puVar3 + 0xf;
    } while (local_f04 != 0);
  }
  FUN_10002ca0(3,0);
  if (0 < param_2) {
    puVar5 = local_f00;
    uVar4 = 1;
    do {
      _grDrawLine_8(puVar5,local_f00 + ((param_2 <= (int)uVar4) - 1 & uVar4) * 0x3c);
      puVar5 = puVar5 + 0x3c;
      bVar1 = (int)uVar4 < param_2;
      uVar4 = uVar4 + 1;
    } while (bVar1);
  }
  DAT_1000e268 = DAT_1000e268 + 1;
  return 1;
}

