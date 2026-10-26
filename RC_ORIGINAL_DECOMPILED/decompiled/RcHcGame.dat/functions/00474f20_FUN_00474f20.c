/*
 * FUN_00474f20 at 00474f20
 * undefined FUN_00474f20(void)
 * Address ranges: 00474f20-0047502f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00474f20(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  iVar2 = 0;
  if ((param_2 < 1) || (0xf9 < param_2)) {
    param_2 = 0xfa;
  }
  iVar4 = 0;
  pfVar3 = (float *)(param_1 + 0x674);
  do {
    if (param_2 <= iVar2) {
      return;
    }
    if (*(char *)(pfVar3 + -0x35) != '\0') {
      local_c = pfVar3[-0x4f];
      local_8 = pfVar3[-0x4e];
      local_4 = pfVar3[-0x4d];
      FUN_005b2fe0(&local_18);
      FUN_005b2f20();
      FUN_005b2fa0(0x42dc0000);
      pfVar3[-0x4c] = local_18;
      pfVar3[-0x4b] = local_14;
      pfVar3[-0x4a] = local_10;
      pfVar3[-0x3a] = 1.4013e-45;
      pfVar3[-0x20] = 3.0;
      iVar1 = __ftol();
      *pfVar3 = (float)iVar1;
      pfVar3[-0x21] = DAT_006b868c;
      FUN_0047e780();
      iVar2 = iVar2 + 1;
    }
    iVar4 = iVar4 + 1;
    pfVar3 = pfVar3 + 0x51;
  } while (iVar4 < 0xfa);
  return;
}

