/*
 * FUN_0043a100 at 0043a100
 * bool __register FUN_0043a100(int * param_1, int param_2, int param_3, int param_4)
 * Address ranges: 0043a100-0043a145
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_0043a100(int *param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  HIMAGELIST himlTrack;
  
  bVar1 = FUN_0043e3b4((int)param_1);
  if (bVar1) {
    param_1[0x1c] = param_2;
    param_1[0x1a] = param_3;
    param_1[0x1b] = param_4;
    himlTrack = (HIMAGELIST)FUN_0043e588(param_1);
    ImageList_BeginDrag(himlTrack,param_2,param_3,param_4);
    *(undefined1 *)((int)param_1 + 0x62) = 1;
  }
  return bVar1;
}

