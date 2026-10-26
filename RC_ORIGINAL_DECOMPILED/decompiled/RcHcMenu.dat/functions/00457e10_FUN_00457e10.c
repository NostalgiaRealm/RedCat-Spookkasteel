/*
 * FUN_00457e10 at 00457e10
 * undefined __register FUN_00457e10(int param_1, int param_2, undefined * param_3)
 * Address ranges: 00457e10-00457f42
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00457e10(int param_1,int param_2,undefined *param_3)

{
  HMODULE pHVar1;
  HMODULE hModule;
  HRSRC hResInfo;
  undefined4 uVar2;
  HGLOBAL pvVar3;
  undefined4 *in_FS_OFFSET;
  undefined **ppuVar4;
  LPCSTR lpName;
  undefined1 *puStack_130;
  undefined1 *puStack_12c;
  undefined1 *puStack_128;
  byte *local_118;
  byte *local_114;
  undefined *local_110;
  undefined1 local_10c;
  char local_108 [256];
  undefined *local_8;
  
  puStack_128 = &stack0xfffffffc;
  local_118 = (byte *)0x0;
  local_114 = (byte *)0x0;
  puStack_12c = &LAB_00457f43;
  puStack_130 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_130;
  local_8 = param_3;
  FUN_0040a1f0(local_108,param_3,0xff);
  hModule = (HMODULE)FUN_00406500(param_2);
  lpName = local_108;
  hResInfo = FindResourceA(hModule,lpName,(LPCSTR)0xa);
  pHVar1 = DAT_005734dc;
  if (hResInfo == (HRSRC)0x0) {
    lpName = local_108;
    hResInfo = FindResourceA(DAT_005734dc,lpName,(LPCSTR)0xa);
    hModule = pHVar1;
    if (hResInfo == (HRSRC)0x0) {
      local_110 = local_8;
      local_10c = 0xb;
      ppuVar4 = &local_110;
      lpName = (LPCSTR)0x0;
      FUN_00457c08(DAT_00573860,3,(int *)&local_114);
      uVar2 = FUN_0040cf28((int)&DAT_00457aec,'\x01',local_114,lpName,ppuVar4);
      FUN_0040382c(uVar2);
    }
  }
  pvVar3 = LoadResource(hModule,hResInfo);
  *(HGLOBAL *)(param_1 + 8) = pvVar3;
  if (*(int *)(param_1 + 8) == 0) {
    local_110 = local_8;
    local_10c = 0xb;
    ppuVar4 = &local_110;
    uVar2 = 0;
    FUN_00457c08(DAT_00573860,4,(int *)&local_118);
    uVar2 = FUN_0040cf28((int)&DAT_00457aec,'\x01',local_118,uVar2,ppuVar4);
    FUN_0040382c(uVar2);
  }
  *in_FS_OFFSET = lpName;
  puStack_130 = &LAB_00457f4a;
  FUN_00403dd4((int *)&local_118,2);
  return;
}

