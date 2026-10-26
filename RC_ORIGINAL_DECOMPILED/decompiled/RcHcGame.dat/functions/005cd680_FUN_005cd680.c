/*
 * FUN_005cd680 at 005cd680
 * undefined FUN_005cd680(void)
 * Address ranges: 005cd680-005cd7a5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_005cd680(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_c;
  undefined4 local_8;
  undefined1 local_4 [4];
  
  local_8 = param_2;
  iVar1 = FUN_005b7290();
  *(int *)(param_1 + 8) = iVar1;
  if (0 < iVar1) {
    iVar1 = FUN_005cf3b0(iVar1 * 0x1c);
    *(int *)(param_1 + 0xc) = iVar1;
    if (iVar1 == 0) {
      FUN_005cf220(0x66,&DAT_006b3f70,s_Eclipse_C__Genesis3D_OpenSource__006aa4ec + 8,0x95,
                   &DAT_006b3f70,0);
      return 0;
    }
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 8)) {
      iVar2 = 0;
      do {
        iVar3 = *(int *)(param_1 + 0xc) + iVar2;
        FUN_005b72a0(local_4,&local_c,iVar3,iVar3 + 4,iVar3 + 8);
        if (local_c == 0) {
          *(undefined4 *)(iVar3 + 0x10) = 0;
          *(undefined4 *)(iVar3 + 0xc) = 0;
        }
        else {
          *(undefined4 *)(iVar3 + 0xc) = 1;
          *(int *)(iVar3 + 0x10) = local_c;
          FUN_005c01c0();
          iVar3 = FUN_005ba560(*(undefined4 *)(param_1 + 0x60),local_c);
          if (iVar3 == 0) {
            FUN_005cf220(0xffffffff,&DAT_006b3f70,s_Eclipse_C__Genesis3D_OpenSource__006aa4ec + 8,
                         0xb0,&DAT_006b3f70,0);
            FUN_005cf400(*(undefined4 *)(param_1 + 0xc));
            _DAT_007203c0 = 0;
            *(undefined4 *)(param_1 + 0xc) = 0;
            *(undefined4 *)(param_1 + 8) = 0;
            return 0;
          }
        }
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + 0x1c;
      } while (iVar1 < *(int *)(param_1 + 8));
    }
  }
  return 1;
}

