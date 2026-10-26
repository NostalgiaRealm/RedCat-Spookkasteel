/*
 * FUN_10017860 at 10017860
 * undefined FUN_10017860(void)
 * Address ranges: 10017860-100179fa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10017860(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int local_8;
  
  uVar3 = 1;
  if (((param_1[0x1c] == 0) && (param_1[0x1d] == 0)) && (param_1[0x1b] == 0)) {
    local_8 = param_2;
    if (1 < *param_1) {
      local_8 = 1;
    }
    if ((param_1[0x2a] != 0) && (param_1[0x2b] != 0)) {
      if (local_8 != 0) {
        iVar1 = FUN_10017e70(param_1);
        if (iVar1 == 0) {
          FUN_10015fb0(0xffffffff,&DAT_10265ce0,s___Bitmap_bitmap_c_1003c5d4,0x648,&DAT_10265ce0,0);
          uVar3 = 0;
        }
      }
      (**(code **)(param_1[0x2a] + 0x38))();
      param_1[0x2b] = 0;
    }
    if (param_1[0x28] != 0) {
      if (param_1[9] == 0) {
        iVar1 = FUN_10019ae0();
        if (iVar1 != 0) {
          iVar2 = FUN_1001a050();
          if (iVar2 == 0) {
            FUN_10019d20();
          }
          else {
            param_1[9] = iVar1;
          }
        }
      }
      FUN_10019d20();
    }
    if (param_1[0x1a] != 0) {
      iVar1 = FUN_10017860();
      if (iVar1 == 0) {
        FUN_10015fb0(0xffffffff,&DAT_10265ce0,s___Bitmap_bitmap_c_1003c5d4,0x66e,&DAT_10265ce0,0);
        uVar3 = 0;
      }
    }
    param_1[0x28] = 0;
    param_1[0x22] = 0;
    param_1[0x21] = 0;
    param_1[0x20] = 0;
    param_1[0x25] = 0;
    param_1[0x24] = 0;
    param_1[0x23] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    param_1[0x2e] = 0;
    param_1[0x2b] = 0;
    param_1[0x2a] = 0;
    return uVar3;
  }
  FUN_10015fb0(0xffffffff,&DAT_10265ce0,s___Bitmap_bitmap_c_1003c5d4,0x63b,&DAT_10265ce0,0);
  return 0;
}

