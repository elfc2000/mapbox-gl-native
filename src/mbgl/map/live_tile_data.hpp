#ifndef MBGL_MAP_LIVE_TILE_DATA
#define MBGL_MAP_LIVE_TILE_DATA

#include <mbgl/map/vector_tile_data.hpp>

namespace mbgl {

class AnnotationManager;

class LiveTileData : public VectorTileData {
public:
    LiveTileData(const TileID&,
                 AnnotationManager&,
                 util::ptr<Style>,
                 GlyphAtlas&,
                 GlyphStore&,
                 SpriteAtlas&,
                 util::ptr<Sprite>,
                 const SourceInfo&,
                 const float overscaling_);
    ~LiveTileData();

    void parse() override;

private:
    AnnotationManager& annotationManager;
};

}

#endif
