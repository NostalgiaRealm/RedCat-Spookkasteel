/*
 * FUN_0049e5e4 at 0049e5e4
 * undefined __register FUN_0049e5e4(int param_1)
 * Address ranges: 0049e5e4-0049e666
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x49e00c slot 4 for TDaviAVILoader. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x49e00c slot 4 for
   TDaviAVILoader. Original bytes unchanged; names and types still inferred. */

void FUN_0049e5e4(int param_1)

{
  if (*(int *)(param_1 + 0x14) != 0) {
    AVIStreamGetFrameClose();
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    AVIStreamRelease();
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    AVIStreamRelease();
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    AVIFileRelease();
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  AVIFileExit();
  return;
}

