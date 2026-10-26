/*
 * FUN_0045a470 at 0045a470
 * undefined FUN_0045a470(void)
 * Address ranges: 0045a470-0045a5fd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x0045a586) */

void __thiscall FUN_0045a470(int param_1,int param_2)

{
  int iVar1;
  float10 fVar2;
  float unaff_retaddr;
  undefined1 *puVar3;
  float fStack_44;
  float local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 local_30 [8];
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  undefined1 local_c [12];
  
  local_40 = (float)param_2 * 0.001;
  puVar3 = local_c;
  (**(code **)(**(int **)(param_1 + 0x360) + 0x48))(puVar3,local_30);
  FUN_005b2fe0(puVar3);
  FUN_005b3000(&fStack_1c);
  FUN_005b2fe0(&local_40);
  fVar2 = (float10)FUN_005b2f20();
  if ((float10)5.0 <= fVar2) {
    if (50.0 < (float)fVar2) {
      iVar1 = __ftol();
      if (iVar1 < 100) {
        if (iVar1 < 0) {
          iVar1 = 0;
        }
      }
      else {
        iVar1 = 99;
      }
      unaff_retaddr = (float)(&DAT_0064d460)[iVar1];
      if (150.0 <= unaff_retaddr) {
        if (470.0 < unaff_retaddr) {
          unaff_retaddr = 470.0;
        }
      }
      else {
        unaff_retaddr = 150.0;
      }
    }
    FUN_005b2fa0(unaff_retaddr);
    *(float *)(param_1 + 0x3b8) = fStack_28 * fStack_44 + fStack_1c;
    *(float *)(param_1 + 0x514) = local_40;
    *(float *)(param_1 + 0x3bc) = fStack_24 * fStack_44 + fStack_18;
    *(undefined4 *)(param_1 + 0x518) = uStack_3c;
    *(float *)(param_1 + 0x3c0) = fStack_20 * fStack_44 + fStack_14;
    *(undefined4 *)(param_1 + 0x51c) = uStack_38;
  }
  return;
}

